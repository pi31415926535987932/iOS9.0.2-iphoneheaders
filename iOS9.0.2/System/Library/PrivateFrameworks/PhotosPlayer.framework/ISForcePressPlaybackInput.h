/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:33:50 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/PhotosPlayer.framework/PhotosPlayer
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <PhotosPlayer/ISGestureInput.h>
#import <UIKit/UIInteractionProgressObserver.h>

@class UIPreviewForceInteractionProgress, NSString;

@interface ISForcePressPlaybackInput : ISGestureInput <UIInteractionProgressObserver> {

	char __isTouchActive;
	char __aboveTimeoutThreshold;
	char __forceAboveThresholdLongEnough;
	char __hasCrossedHintThreshold;
	int __currentTimeoutRequestId;
	UIPreviewForceInteractionProgress* __interactionProgress;

}

@property (assign,setter=_setTouchActive:,nonatomic) char _isTouchActive;                                                           //@synthesize _isTouchActive=__isTouchActive - In the implementation block
@property (assign,setter=_setAboveTimeoutThreshold:,nonatomic) char _aboveTimeoutThreshold;                                         //@synthesize _aboveTimeoutThreshold=__aboveTimeoutThreshold - In the implementation block
@property (assign,setter=_setForceAboveThresholdLongEnough:,nonatomic) char _forceAboveThresholdLongEnough;                         //@synthesize _forceAboveThresholdLongEnough=__forceAboveThresholdLongEnough - In the implementation block
@property (assign,setter=_setCurrentTimeoutRequestId:,nonatomic) int _currentTimeoutRequestId;                                      //@synthesize _currentTimeoutRequestId=__currentTimeoutRequestId - In the implementation block
@property (assign,setter=_setHasCrossedHintThreshold:,nonatomic) char _hasCrossedHintThreshold;                                     //@synthesize _hasCrossedHintThreshold=__hasCrossedHintThreshold - In the implementation block
@property (setter=_setInteractionProgress:,nonatomic,retain) UIPreviewForceInteractionProgress * _interactionProgress;              //@synthesize _interactionProgress=__interactionProgress - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)_handlePress:(id)arg1 ;
-(void)interactionProgressDidUpdate:(id)arg1 ;
-(void)interactionProgress:(id)arg1 didEnd:(char)arg2 ;
-(int)inputType;
-(id)newGestureRecognizer;
-(void)_setInteractionProgress:(id)arg1 ;
-(void)_updateValue;
-(void)_setHasCrossedHintThreshold:(char)arg1 ;
-(void)_setAboveTimeoutThreshold:(char)arg1 ;
-(void)_setForceAboveThresholdLongEnough:(char)arg1 ;
-(void)_setTouchActive:(char)arg1 ;
-(UIPreviewForceInteractionProgress *)_interactionProgress;
-(char)_forceAboveThresholdLongEnough;
-(char)_hasCrossedHintThreshold;
-(int)_currentTimeoutRequestId;
-(void)_setCurrentTimeoutRequestId:(int)arg1 ;
-(void)gestureRecognizerDidChange;
-(void)gestureRecognizerViewDidChange;
-(char)_isTouchActive;
-(char)_aboveTimeoutThreshold;
@end
