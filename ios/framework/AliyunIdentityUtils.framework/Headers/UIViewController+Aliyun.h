//
//  UIViewController+Aliyun.h
//  AliyunIdentityUtils
//
//  Created by nansong.zxc on 2020/7/27.
//  Copyright © 2020 aliyun.com. All rights reserved.
//

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

typedef void (^AliyunDismissBlock)(void);
@interface UIViewController ()

- (void)aliyunAlertWithTitle:(NSString *)title
                  titleColor:(UIColor *)titleColor
                     message:(NSString *)message
                messageColor:(UIColor *)messageColor
                confirmTitle:(NSString *)confirmTitle
           confirmTitleColor:(UIColor *)confirmTitleColor
                     handler:(void(^)(void))handler;

- (void)aliyunAlertWithTitle:(NSString *)title
                  titleColor:(UIColor *)titleColor
                     message:(NSString *)message
                messageColor:(UIColor *)messageColor
                 cancelTitle:(NSString *)cancelTitle
            cancelTitleColor:(UIColor *)cancelTitleColor
                confirmTitle:(NSString *)confirmTitle
           confirmTitleColor:(UIColor *)confirmTitleColor
                      cancel:(void(^)(void))cancel 
                     confirm:(void(^)(void))confirm;

- (void)aliyunDismissToController:(UIViewController *) dstViewController completion:(AliyunDismissBlock) complete;

@end

NS_ASSUME_NONNULL_END
