//
//  UIColor+Aliyun.h
//  AliyunUtils
//
//  Created by lingxuan on 2020/5/25.
//  Copyright © 2020 aliyun.com. All rights reserved.
//

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@interface UIColor (Aliyun)
+ (UIColor *)aliyunColorWithRGBHex:(UInt32)hex;
+ (UIColor *)aliyunColorWithHexString:(NSString *)color;
+ (UIColor *)aliyunColorWithHexString:(NSString *)color alpha:(CGFloat)alpha;
@end

NS_ASSUME_NONNULL_END
