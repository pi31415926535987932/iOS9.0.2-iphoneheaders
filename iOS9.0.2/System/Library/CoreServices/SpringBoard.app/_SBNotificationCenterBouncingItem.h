/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:36:35 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <SpringBoard/SpringBoard-Structs.h>
#import <UIKit/UIDynamicItem.h>

@class UIBezierPath, NSString;

@interface _SBNotificationCenterBouncingItem : NSObject <UIDynamicItem> {

	CGPoint _center;
	CGRect _bounds;
	/*^block*/id _stepper;

}

@property (assign,nonatomic) CGRect frame; 
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic) CGPoint center; 
@property (nonatomic,readonly) CGRect bounds; 
@property (assign,nonatomic) CGAffineTransform transform; 
@property (nonatomic,readonly) unsigned collisionBoundsType; 
@property (nonatomic,readonly) UIBezierPath * collisionBoundingPath; 
-(id)initWithFrame:(CGRect)arg1 stepper:(/*^block*/id)arg2 ;
-(CGRect)bounds;
-(void)dealloc;
-(void)setFrame:(CGRect)arg1 ;
-(CGRect)frame;
-(void)setBounds:(CGRect)arg1 ;
-(CGPoint)center;
-(void)setTransform:(CGAffineTransform)arg1 ;
-(CGAffineTransform)transform;
-(void)setCenter:(CGPoint)arg1 ;
@end

