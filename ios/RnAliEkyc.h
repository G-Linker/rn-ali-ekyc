
#ifdef RCT_NEW_ARCH_ENABLED
#import "RNRnAliEkycSpec.h"

@interface RnAliEkyc : NSObject <NativeRnAliEkycSpec>
#else
#import <React/RCTBridgeModule.h>

@interface RnAliEkyc : NSObject <RCTBridgeModule>
#endif

@end
