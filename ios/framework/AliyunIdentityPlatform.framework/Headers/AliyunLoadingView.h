//
//  AliyunLoadingView.h
//  AliyunIdentityPlatform
//
//  Created by nansong.zxc on 2020/7/25.
//  Copyright © 2020 aliyun.com. All rights reserved.
//

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@interface AliyunLoadingView : UIView
- (void)initUI:(UIColor *)backgroundColor withTextColor:(UIColor *) textColor withRoundUIMode:(BOOL) isRoundFace;
- (void)setLoadingText:(NSString *)loadingText;
- (void)startLoading;
- (void)stopLoading;
@end

NS_ASSUME_NONNULL_END
