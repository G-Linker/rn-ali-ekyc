//
//  AliyunConstant.h
//  AliyunIdentityPlatform
//
//  Created by 汪澌哲 on 2023/4/11.
//  Copyright © 2023 aliyun.com. All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface AliyunConstant : NSObject

/**
 * The color of the buttons at the bottom of the OCR recognition result ViewController. such as #FF6A00
 */
extern NSString *const kIdentityParamKeyNextButtonColor;

/**
 * The color of the progress bar in the face ViewController, such as #FF6A00
 */
extern NSString *const kIdentityParamKeyRoundProgressColor;

/**
 * Whether to display the OCR recognition result ViewController？
 *  Values：
 * ● "1": Display. (default)
 * ● "0": Not display.
 */
extern NSString *const kIdentityParamKeyShowOcrResult;

/**
 * Whether to display the "Album" icon on the OCR recognition ViewController？
 *  Values：
 * ● "1": Display. (default)
 * ● "0": Not display.
 */
extern NSString *const kIdentityParamKeyOcrSelectPhoto;

/**
 * Maximum number of errors allowed. The value range is 3-10 times. The default is 10 times.
 */
extern NSString *const kIdentityParamKeyMaxRetryCount;

/**
 * OCR recognition timeout period. The value range is 20-60 seconds. Default is 20 seconds.
 */
extern NSString *const kIdentityParamKeyCardOcrTimeOutPeriod;

/**
 * Edit OCR recognition result timeout period. The value range is 60 - 180 seconds. Not enabled by default.
 */
extern NSString *const kIdentityParamKeyCardOcrEditTimeOutPeriod;

/**
 * Liveness detection timeout. The value range is 20-60 seconds. Default is 20 seconds.
 */
extern NSString *const kIdentityParamKeyFaceVerifyTimeOutPeriod;

/**
 * set SDK language, English is displayed by default.
 */
extern NSString *const kIdentityParamKeyLanguage;

extern NSString *const kIdentityParamKeyDefaultLanguage;


/**
 * Set font
 */
extern NSString *const kIdentityParamKeyFontName;

/**
 * Set close button position
 */
extern NSString *const kIdentityParamKeyCloseButtonPosition;

@end

NS_ASSUME_NONNULL_END
