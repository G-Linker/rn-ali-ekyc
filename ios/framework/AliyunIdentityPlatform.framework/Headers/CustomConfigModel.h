//
//  CustomConfigModel.h
//  AliyunIdentityPlatform
//
//  Created by 顾鹿 on 2024/9/4.
//  Copyright © 2024 aliyun.com. All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface FaceConfig : NSObject

- (instancetype)initWithDictionary:(NSDictionary *)dict;

@property (nonatomic, strong) NSString *exitIconBase64;
@property (nonatomic, strong) NSString *faceBGColor;
@property (nonatomic, strong) NSString *faceTitleColor;
@property (nonatomic, strong) NSString *faceTipColor;
@property (nonatomic, strong) NSString *opFailedTitleColor;
@property (nonatomic, strong) NSString *opFailedTipColor;
@property (nonatomic, strong) NSString *opFailedConfirmColor;
@property (nonatomic, strong) NSString *faceProgressStartColor;
@property (nonatomic, strong) NSString *faceProgressEndColor;
@property (nonatomic, strong) NSString *exitAlertTitleColor;
@property (nonatomic, strong) NSString *exitAlertMessageColor;
@property (nonatomic, strong) NSString *exitAlertCancelColor;
@property (nonatomic, strong) NSString *exitAlertConfirmationColor;
@property (nonatomic, strong) NSString *timeoutAlertTitleColor;
@property (nonatomic, strong) NSString *timeoutAlertMessageColor;
@property (nonatomic, strong) NSString *timeoutAlertConfirmationColor;
@property (nonatomic, strong) NSString *tooManyRetriesAlertTitleColor;
@property (nonatomic, strong) NSString *tooManyRetriesAlertMessageColor;
@property (nonatomic, strong) NSString *tooManyRetriesAlertConfirmColor;
@property (nonatomic, strong) NSString *interruptedAlertTitleColor;
@property (nonatomic, strong) NSString *interruptedAlertMessageColor;
@property (nonatomic, strong) NSString *interruptedAlertConfirmColor;
@property (nonatomic, strong) NSString *permissionFailedAlertTitleColor;
@property (nonatomic, strong) NSString *permissionFailedAlertMessageColor;
@property (nonatomic, strong) NSString *permissionFailedAlertConfirmColor;
@property (nonatomic, strong) NSString *verifyNetworkErrorAlertTitleColor;
@property (nonatomic, strong) NSString *verifyNetworkErrorAlertMessageColor;
@property (nonatomic, strong) NSString *verifyNetworkErrorAlertConfirmColor;
@property (nonatomic, strong) NSString *verifyNetworkErrorAlertCancelColor;
@property (nonatomic, strong) NSString *verifyLoadingColor;

@property (nonatomic, strong) NSMutableArray *settingErrorKeyArray;
@property (nonatomic, strong) NSMutableArray *notIncludedKeyArray;
@end

@interface OcrConfig : NSObject

- (instancetype)initWithDictionary:(NSDictionary *)dict;


@property (nonatomic, strong) NSString *exitIconBase64;
@property (nonatomic, strong) NSString *albumBase64;
@property (nonatomic, strong) NSString *takePhotoBase64;
@property (nonatomic, strong) NSString *submitBase64;
@property (nonatomic, strong) NSString *ocrResultExitIconBase64;
@property (nonatomic, strong) NSString *ocrResultTipIconBase64;
@property (nonatomic, strong) NSString *ocrTitleColor;
@property (nonatomic, strong) NSString *ocrBorderColor;
@property (nonatomic, strong) NSString *ocrSubmitTitleColor;
@property (nonatomic, strong) NSString *ocrLoadingColor;
@property (nonatomic, strong) NSString *failedAlertTitleColor;
@property (nonatomic, strong) NSString *failedAlertMessageColor;
@property (nonatomic, strong) NSString *failedAlertCancelColor;
@property (nonatomic, strong) NSString *failedAlertConfirmationColor;
@property (nonatomic, strong) NSString *timeoutAlertTitleColor;
@property (nonatomic, strong) NSString *timeoutAlertMessageColor;
@property (nonatomic, strong) NSString *timeoutAlertConfirmationColor;
@property (nonatomic, strong) NSString *exitAlertTitleColor;
@property (nonatomic, strong) NSString *exitAlertCancelColor;
@property (nonatomic, strong) NSString *exitAlertConfirmationColor;
@property (nonatomic, strong) NSString *ocrResultTitleColor;
@property (nonatomic, strong) NSString *ocrResultTipBGColor;
@property (nonatomic, strong) NSString *ocrResultTipColor;
@property (nonatomic, strong) NSString *ocrResultInfoTitleColor;
@property (nonatomic, strong) NSString *ocrResultInfoContentColor;
@property (nonatomic, strong) NSString *ocrResultInfoBorderColor;
@property (nonatomic, strong) NSString *ocrResultTipTitleColor;
@property (nonatomic, strong) NSString *ocrResultErrorTipBGColor;
@property (nonatomic, strong) NSString *ocrResultConfirmBtnDisabledBGColor;
@property (nonatomic, strong) NSString *ocrResultConfirmBtnDisabledTitleColor;
@property (nonatomic, strong) NSString *ocrResultConfirmBtnEnabledBGColor;
@property (nonatomic, strong) NSString *ocrResultConfirmBtnEnabledTitleColor;
@property (nonatomic, strong) NSString *ocrResultExitAlertTitleColor;
@property (nonatomic, strong) NSString *ocrResultExitAlertCancelColor;
@property (nonatomic, strong) NSString *ocrResultExitAlertConfirmationColor;
@property (nonatomic, strong) NSString *ocrResultLoadingColor;
@property (nonatomic, strong) NSString *restrictionsAlertTitleColor;
@property (nonatomic, strong) NSString *restrictionsAlertMessageColor;
@property (nonatomic, strong) NSString *restrictionsAlertConfirmationColor;
@property (nonatomic, strong) NSString *permissionFailedAlertTitleColor;
@property (nonatomic, strong) NSString *permissionFailedAlertMessageColor;
@property (nonatomic, strong) NSString *permissionFailedAlertConfirmColor;
@property (nonatomic, strong) NSString *ocrNetworkErrorAlertTitleColor;
@property (nonatomic, strong) NSString *ocrNetworkErrorAlertMessageColor;
@property (nonatomic, strong) NSString *ocrNetworkErrorAlertCancelColor;
@property (nonatomic, strong) NSString *ocrNetworkErrorAlertConfirmColor;
@property (nonatomic, strong) NSString *docErrorAlertTitleColor;
@property (nonatomic, strong) NSString *docErrorAlertMessageColor;
@property (nonatomic, strong) NSString *docErrorAlertCancelColor;
@property (nonatomic, strong) NSString *docErrorAlertConfirmColor;
@property (nonatomic, strong) NSString *ocrResultNetworkErrorAlertTitleColor;
@property (nonatomic, strong) NSString *ocrResultNetworkErrorAlertMessageColor;
@property (nonatomic, strong) NSString *ocrResultNetworkErrorAlertConfirmColor;
@property (nonatomic, strong) NSString *ocrResultInfoErrorAlertMessageColor;
@property (nonatomic, strong) NSString *ocrResultInfoErrorAlertConfirmColor;

@property (nonatomic, strong) NSMutableArray *settingErrorKeyArray;
@property (nonatomic, strong) NSMutableArray *notIncludedKeyArray;

@end

@interface CustomConfigModel : NSObject

@property (nonatomic, strong) FaceConfig *faceConfig;
@property (nonatomic, strong) OcrConfig *ocrConfig;

- (instancetype)initWithJSON:(NSString *)jsonString completion:(void (^)(BOOL success, NSError *error, NSDictionary *warningDict))completion;

@end


NS_ASSUME_NONNULL_END
