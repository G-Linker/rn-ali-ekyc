#import "RnAliEkyc.h"
#import <React/RCTUtils.h>
#import <AliyunIdentityPlatform/AliyunIdentityPlatform.h>

@implementation RnAliEkyc
RCT_EXPORT_MODULE()

// Example method
// See // https://reactnative.dev/docs/native-modules-ios
RCT_EXPORT_METHOD(install:(RCTPromiseResolveBlock)resolve
                  rejecter:(RCTPromiseRejectBlock)reject)
{
  [[AliyunIdentityPlatform sharedInstance] install];
  resolve(@"true");
}

RCT_EXPORT_METHOD(getMetaInfo:(RCTPromiseResolveBlock)resolve
                  rejecter:(RCTPromiseRejectBlock)reject)
{
  NSString *metaInfo = [[AliyunIdentityPlatform sharedInstance] getMetaInfo];
  resolve(metaInfo);
}

RCT_EXPORT_METHOD(verify:(NSString *)transactionId
                  extParams:(NSDictionary *)extParams
                  resolve:(RCTPromiseResolveBlock)resolve
                  reject:(RCTPromiseRejectBlock)reject)
{
  UIViewController *currentViewController = RCTPresentedViewController();
  dispatch_async(dispatch_get_main_queue(), ^{
        [[AliyunIdentityPlatform sharedInstance] verifyWithCertifyId:transactionId
                                           withCurrentViewController:currentViewController
                                                       withExtParams:extParams
                                                            complete:^(AliyunIdentityVerifyRes *response) {
            NSDictionary *result = @{
                @"code": @(response.code),
                @"message": response.message
            };
            resolve(result);
        }];
    });
}

@end
