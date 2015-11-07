/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:36:31 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <SpringBoard/SpringBoard-Structs.h>
@interface UIGestureRecognizerTransformAnalyzerInfo : NSObject {

	float _translationMagnitude;
	float _scale;
	float _rotation;
	CGPoint _translation;
	CGPoint _absoluteTranslation;

}

@property (assign,nonatomic) CGPoint translation;                      //@synthesize translation=_translation - In the implementation block
@property (assign,nonatomic) float translationMagnitude;               //@synthesize translationMagnitude=_translationMagnitude - In the implementation block
@property (assign,nonatomic) CGPoint absoluteTranslation;              //@synthesize absoluteTranslation=_absoluteTranslation - In the implementation block
@property (assign,nonatomic) float scale;                              //@synthesize scale=_scale - In the implementation block
@property (assign,nonatomic) float rotation;                           //@synthesize rotation=_rotation - In the implementation block
-(void)_setTranslation:(CGPoint)arg1 ;
-(void)_setTranslationMagnitude:(float)arg1 ;
-(void)_setAbsoluteTranslation:(CGPoint)arg1 ;
-(void)_setRotation:(float)arg1 ;
-(float)translationMagnitude;
-(CGPoint)absoluteTranslation;
-(id)description;
-(void)_setScale:(float)arg1 ;
-(float)scale;
-(float)rotation;
-(void)_reset;
-(CGPoint)translation;
@end
