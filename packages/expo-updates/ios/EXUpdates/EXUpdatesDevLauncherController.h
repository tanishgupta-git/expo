//  Copyright © 2021 650 Industries. All rights reserved.

#if __has_include("EXUpdatesInterface-tvOS-umbrella.h")
#import "EXUpdatesInterface-tvOS-umbrella.h"
#endif
#if __has_include("EXUpdatesInterface-iOS-umbrella.h")
#import "EXUpdatesInterface-iOS-umbrella.h"
#endif
#if __has_include("EXUpdatesInterface-umbrella.h")
#import "EXUpdatesInterface-umbrella.h"
#endif

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface EXUpdatesDevLauncherController : NSObject <EXUpdatesExternalInterface>

+ (instancetype)sharedInstance;

@end

NS_ASSUME_NONNULL_END
