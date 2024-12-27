package com.rnaliekyc;

import androidx.annotation.NonNull;

import com.facebook.react.bridge.ReadableMap;
import com.facebook.react.bridge.ReadableMapKeySetIterator;
import com.facebook.react.bridge.ReadableType;
import com.facebook.react.bridge.WritableMap;
import com.facebook.react.bridge.WritableNativeMap;
import com.facebook.react.bridge.Promise;
import com.facebook.react.bridge.ReactApplicationContext;
import com.facebook.react.bridge.ReactContextBaseJavaModule;
import com.facebook.react.bridge.ReactMethod;
import com.facebook.react.module.annotations.ReactModule;

import java.util.Map;
import java.util.HashMap;
import java.util.Iterator;

import com.aliyun.identity.platform.api.IdentityCallback;
import com.aliyun.identity.platform.api.IdentityPlatform;
import com.aliyun.identity.platform.api.IdentityResponse;
import com.aliyun.identity.platform.api.IdentityResponseCode;

@ReactModule(name = RnAliEkycModule.NAME)
public class RnAliEkycModule extends ReactContextBaseJavaModule {
  public static final String NAME = "RnAliEkyc";

  public static Map<String, String> toMap(ReadableMap readableMap) {
    Map<String, String> map = new HashMap<>();
    ReadableMapKeySetIterator iterator = readableMap.keySetIterator();

    while (iterator.hasNextKey()) {
      String key = iterator.nextKey();
      ReadableType type = readableMap.getType(key);

      switch (type) {
        case String:
          map.put(key, readableMap.getString(key));
          break;
      }
    }

    return map;
  }

  public RnAliEkycModule(ReactApplicationContext reactContext) {
    super(reactContext);
  }

  @Override
  @NonNull
  public String getName() {
    return NAME;
  }

  @ReactMethod
  public void getMetaInfo(Promise promise) {
    promise.resolve(
      IdentityPlatform.getMetaInfo(getCurrentActivity())
    );
  }

  @ReactMethod
  public void install(Promise promise) {
    IdentityPlatform.getInstance().install(getCurrentActivity());
    promise.resolve(true);
  }

  @ReactMethod
  public void verify(String transactionId, ReadableMap extParams, Promise promise) {
    IdentityPlatform.getInstance().verify(transactionId, toMap(extParams), new IdentityCallback() {
      @Override
      public boolean response(final IdentityResponse response) {
        WritableMap mapResponse = new WritableNativeMap();
        mapResponse.putInt("code", response.code);
        mapResponse.putString("message", response.message);
        promise.resolve(mapResponse);
        return true;
      }
    });
  }
}
