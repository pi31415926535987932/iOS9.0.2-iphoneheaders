/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:36:29 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <SpringBoard/SpringBoard-Structs.h>
#import <UIKit/UIView.h>
#import <SpringBoard/SBSceneLayoutReferenceOrientedView.h>

@class NSArray, NSString;

@interface SBSceneLayoutAnimationWrapperView : UIView <SBSceneLayoutReferenceOrientedView> {

	int _layoutOrientation;
	int _referenceOrientation;

}

@property (nonatomic,retain,readonly) NSArray * elementWrapperViews; 
@property (assign,nonatomic) int referenceOrientation;                            //@synthesize referenceOrientation=_referenceOrientation - In the implementation block
@property (assign,nonatomic) int layoutOrientation;                               //@synthesize layoutOrientation=_layoutOrientation - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSArray *)elementWrapperViews;
-(void)crossfadeWithCompletion:(/*^block*/id)arg1 ;
-(int)referenceOrientation;
-(id)elementWrapperViewForLayoutRole:(int)arg1 ;
-(void)setReferenceOrientation:(int)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(NSString *)description;
-(void)invalidate;
-(int)layoutOrientation;
-(void)setLayoutOrientation:(int)arg1 ;
@end

