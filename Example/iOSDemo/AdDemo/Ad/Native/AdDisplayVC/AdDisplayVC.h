//
//  AdDisplayVC.h
//  iOSDemo
//
//  Created by ltz on 2025/1/11.
//

#import "BannerVC.h"

#import <AnyThinkSDK/AnyThinkSDK.h>
 
@interface AdDisplayVC : BaseVC

- (instancetype)initWithOffer:(ATNativeAdOffer *)offer adViewSize:(CGSize)size;
- (instancetype)initWithAdView:(ATNativeADView *)adView offer:(ATNativeAdOffer *)offer adViewSize:(CGSize)size;
- (void)bindAdView:(ATNativeADView *)adView;

@end
