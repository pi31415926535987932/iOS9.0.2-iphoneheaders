/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:35:43 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/AccessibilityBundles/SpringBoard.axbundle/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <SpringBoard/SpringBoard-Structs.h>
#import <UIKit/UIPanGestureRecognizer.h>
#import <libobjc.A.dylib/_UIScreenEdgePanRecognizerDelegate.h>

@class _UIScreenEdgePanRecognizer, UITouch, NSString;

@interface AXSpeakScreenGestureRecognizer : UIPanGestureRecognizer <_UIScreenEdgePanRecognizerDelegate> {

	_UIScreenEdgePanRecognizer* _recognizer;
	UITouch* _firstTouch;

}

@property (nonatomic,retain) UITouch * firstTouch;                  //@synthesize firstTouch=_firstTouch - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setFirstTouch:(UITouch *)arg1 ;
-(UITouch *)firstTouch;
-(void)dealloc;
-(id)initWithTarget:(id)arg1 action:(SEL)arg2 ;
-(void)setEdges:(unsigned)arg1 ;
-(void)touchesBegan:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesMoved:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesEnded:(id)arg1 withEvent:(id)arg2 ;
-(void)reset;
-(void)screenEdgePanRecognizerStateDidChange:(id)arg1 ;
-(float)_edgeRegionSize;
-(char)isRequiringLongPress;
-(char)_shouldTryToBeginWithEvent:(id)arg1 ;
-(unsigned)edges;
-(CGPoint)_locationForTouch:(id)arg1 ;
-(int)_touchInterfaceOrientation;
@end

