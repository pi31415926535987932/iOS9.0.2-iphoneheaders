/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:34:40 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/WeatherUI.framework/WeatherUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class CALayer;

@interface WUIDynamicWeatherBackgroundInteractiveTransaction : NSObject {

	float _progress;
	CALayer* _layer;
	CALayer* _toLayer;
	int _swipeDirection;

}

@property (assign,nonatomic) float progress;                  //@synthesize progress=_progress - In the implementation block
@property (assign,nonatomic) CALayer * layer;                 //@synthesize layer=_layer - In the implementation block
@property (assign,nonatomic) CALayer * toLayer;               //@synthesize toLayer=_toLayer - In the implementation block
@property (assign,nonatomic) int swipeDirection;              //@synthesize swipeDirection=_swipeDirection - In the implementation block
-(int)swipeDirection;
-(CALayer *)layer;
-(void)setLayer:(CALayer *)arg1 ;
-(void)setProgress:(float)arg1 ;
-(float)progress;
-(CALayer *)toLayer;
-(void)setToLayer:(CALayer *)arg1 ;
-(void)setSwipeDirection:(int)arg1 ;
@end

