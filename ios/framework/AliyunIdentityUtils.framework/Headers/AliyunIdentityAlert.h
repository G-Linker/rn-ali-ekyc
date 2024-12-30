//
//  AliyunIdentityAlert.h
//  AliyunIdentityUtils
//
//  Created by 顾鹿 on 2024/9/3.
//  Copyright © 2024 aliyun.com. All rights reserved.
//

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@interface AliyunIdentityAlert : UIView
@property (nonatomic, copy) NSArray<void (^)(void)> *buttonActions; // 新增保存按钮动作的属性
@property (nonatomic, strong) UIView *alertContainer;
@property (nonatomic, strong) UILabel *titleLabel;
@property (nonatomic, strong) UILabel *messageLabel;
@property (nonatomic, strong) UIView *separatorLine;
@property (nonatomic, strong) NSMutableArray<UIButton *> *buttons; // 用于存储按钮

- (instancetype)initWithTitle:(NSString *)title
                   titleColor:(UIColor *)titleColor
                     message:(NSString *)message
                messageColor:(UIColor *)messageColor
                     buttons:(NSArray<NSString *> *)buttonTitles
                 buttonColors:(NSArray<UIColor *> *)buttonColors
                buttonActions:(NSArray<void (^)(void)> *)buttonActions;

- (void)show; // 显示弹窗
- (void)dismiss; // 关闭弹窗

@end

NS_ASSUME_NONNULL_END
