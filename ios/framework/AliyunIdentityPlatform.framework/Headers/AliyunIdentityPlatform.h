//
//  AliyunIdentityPlatform.h
//  AliyunIdentityPlatform
//
//  Created by nansong.zxc on 2020/7/24.
//  Copyright © 2020 aliyun.com. All rights reserved.
//

#ifndef AliyunIdentityPlatform_header_
#define AliyunIdentityPlatform_header_

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>
#import "AliyunIdentityVerifyRes.h"
#import "AliyunIdentityVerifyCode.h"
#import "AliyunIdentityCom.h"
#import "AliyunNetEnv.h"
#import "AliyunNetwork.h"
#import "AliyunLoadingView.h"
#import "AliyunIdentityLogger.h"
#import "AliyunIdentityCenter.h"
#import "AliyunIdentityVerifyController.h"
#import "AliyunConstant.h"
//! Project version number for AliyunIdentityPlatform.
FOUNDATION_EXPORT double AliyunIdentityPlatformVersionNumber;

//! Project version string for AliyunIdentityPlatform.
FOUNDATION_EXPORT const unsigned char AliyunIdentityPlatformVersionString[];
@interface AliyunIdentityPlatform : NSObject

#pragma mark - API
/**
 * Singleton Pattern
 * Get the IdentityPlatform instance
 */
+ (AliyunIdentityPlatform *)sharedInstance;

/**
 * initialization
 */
- (void)install;

/**
 * IPv6 initialization
 */
- (void)installIPv6;

/**
 * Get the MetaInfo needed for server initialization
 */
- (NSString*) getMetaInfo;

/**
 *  start the verify
 * @param certifyId - CertifyId obtained from the server
 * @param viewController - The container used to display the SDK
 * @param extParams - Custom extension parameters
 * @param completeBlock - Authentication completed callback
 */
- (void)verifyWithCertifyId:(NSString *)certifyId
  withCurrentViewController:(UIViewController *)viewController
              withExtParams:(NSDictionary *)extParams
                   complete:(AliyunIdentityVerifyBlock)completeBlock;



/**
 * Set custom UI
 * @param configuration - Input JSON string
 * @param completeBlock - Callback for the configuration results
*/
- (void)setCustomUI:(nonnull NSString *)configuration
           complete:(void(^_Nullable)(BOOL success, NSError * _Nullable error, NSDictionary *warningDict))completeBlock;


@end

#endif
