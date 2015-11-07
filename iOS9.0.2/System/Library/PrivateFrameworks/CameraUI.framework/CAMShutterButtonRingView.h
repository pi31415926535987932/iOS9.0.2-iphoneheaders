/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:32:05 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/CameraUI.framework/CameraUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CameraUI/CameraUI-Structs.h>
#import <UIKit/UIView.h>

@class CAShapeLayer;

@interface CAMShutterButtonRingView : UIView {

	CAShapeLayer* __outsideRingLayer;
	CGPathRef __normalRingPath;
	float __normalLineWidth;
	CGRect __normalRingBounds;

}

@property (nonatomic,readonly) CAShapeLayer * _outsideRingLayer;              //@synthesize _outsideRingLayer=__outsideRingLayer - In the implementation block
@property (nonatomic,readonly) CGPathRef _normalRingPath;                     //@synthesize _normalRingPath=__normalRingPath - In the implementation block
@property (nonatomic,readonly) CGRect _normalRingBounds;                      //@synthesize _normalRingBounds=__normalRingBounds - In the implementation block
@property (nonatomic,readonly) float _normalLineWidth;                        //@synthesize _normalLineWidth=__normalLineWidth - In the implementation block
-(id)initWithSpec:(CAMShutterButtonSpec)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)dealloc;
-(void)layoutSubviews;
-(CAShapeLayer *)_outsideRingLayer;
-(CGPathRef)_normalRingPath;
-(CGRect)_normalRingBounds;
-(float)_normalLineWidth;
@end
