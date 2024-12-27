import { NativeModules, Platform } from 'react-native';

const LINKING_ERROR =
  `The package 'rn-ali-ekyc' doesn't seem to be linked. Make sure: \n\n` +
  Platform.select({ ios: "- You have run 'pod install'\n", default: '' }) +
  '- You rebuilt the app after installing the package\n' +
  '- You are not using Expo Go\n';

const RnAliEkyc = NativeModules.RnAliEkyc
  ? NativeModules.RnAliEkyc
  : new Proxy(
      {},
      {
        get() {
          throw new Error(LINKING_ERROR);
        },
      }
    );

export function install(): Promise<undefined> {
  return RnAliEkyc.install();
}

type TMetaInfo = {
  apdidToken: string;
  appName: string;
  appVersion: string;
  bioMetaInfo: string;
  deviceBrand: string;
  deviceManufacturer: string;
  deviceModel: string;
  deviceType: string;
  identityVer: string;
  osVersion: string;
  sdkVersion: string;
};

export async function getMetaInfo(): Promise<TMetaInfo> {
  const jsonStr = await RnAliEkyc.getMetaInfo();
  return JSON.parse(jsonStr);
}

type IdentityResponse = {
  code: number;
  message: string;
};

export function verify(
  transactionId: string,
  extParams: any = {}
): Promise<IdentityResponse> {
  return RnAliEkyc.verify(transactionId, extParams);
}
