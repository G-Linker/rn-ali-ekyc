//
//  AliyunNetwork.h
//  AliyunIdentityPlatform
//
//  Created by nansong.zxc on 2020/7/24.
//  Copyright © 2020 aliyun.com. All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN
typedef void(^AliyunNetworkBlock)(bool success, NSDictionary *__nullable resContent, NSString *__nullable error);
typedef void(^AliyunOssBlock)(bool success, int fileIdx, NSString *fileName);
typedef void(^AliyunOssUploadBlock)(bool success);

@interface AliyunNetwork : NSObject

+ (AliyunNetwork *)sharedInstance;

- (void)initNetwork;

- (void)cancelAll;

- (void)sendHttpRequest:(NSString*) appKey
              appSecret:(NSString*)appSecret
               withSeed:(NSString *)appSeed
                    Url:(NSString*)url
                 action:(NSString*)action
                version:(NSString*) version
                   host:(NSString *)host
                  param:(NSDictionary*) parameters
        completionBlock:(AliyunNetworkBlock)completionBlock;

+ (BOOL)isSecCertifyId:(NSString *)certifyId;

- (void)sendHttpRequestInteli:(NSString*)action
                      version:(NSString*) version
                     withSeed:(NSString *)appSeed
                        param:(NSDictionary*) parameters
              completionBlock:(AliyunNetworkBlock)completionBlock;

- (void)uploadOssFile:(int) fileIdx
         withFileName:(NSString *)fileName
      withFileContent:(NSData *)fileContent
        withAccessKey:(NSString *) accessKey
        withSecretKey:(NSString *) secretKey
    withSecurityToken:(NSString *) securityToken
         withEndPoint:(NSString *) endPoint
       withNamePrefix:(NSString *) namePrefix
       withBucketName:(NSString *) bucketName
            withBlock:(AliyunOssBlock) ossBlock;

- (BOOL)uploadOssFileSyn:(int) fileIdx
     withFileName:(NSString *)fileName
  withFileContent:(NSData *)fileContent
    withAccessKey:(NSString *) accessKey
    withSecretKey:(NSString *) secretKey
withSecurityToken:(NSString *) securityToken
     withEndPoint:(NSString *) endPoint
   withNamePrefix:(NSString *) namePrefix
          withBucketName:(NSString *) bucketName;

- (void)uploadOssFileDataArray:(NSMutableArray *)fileContentArray
                 fileNameArray:(NSMutableArray *)fileNameArray
                     accessKey:(NSString *) accessKey
                     secretKey:(NSString *) secretKey
                 securityToken:(NSString *) securityToken
                      endPoint:(NSString *) endPoint
                    namePrefix:(NSString *) namePrefix
                    bucketName:(NSString *) bucketName
                         block:(AliyunOssUploadBlock) ossBlock;
@end


NS_ASSUME_NONNULL_END
