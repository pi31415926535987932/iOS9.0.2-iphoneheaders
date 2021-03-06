/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:36:27 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <SpringBoard/SpringBoard-Structs.h>
#import <SpringBoard/SBAlert.h>
#import <SpringBoard/SBPowerDownViewDelegate.h>

@protocol SBPowerDownViewInterface;
@class SBAlertView;

@interface SBPowerDownController : SBAlert <SBPowerDownViewDelegate> {

	id _delegate;
	SBAlertView*<SBPowerDownViewInterface> _powerDownView;
	/*^block*/id _orderOutCompletion;

}

@property (assign,nonatomic) id<SBPowerDownControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,copy) id orderOutCompletion;                                     //@synthesize orderOutCompletion=_orderOutCompletion - In the implementation block
-(double)autoLockTime;
-(char)managesOwnStatusBarAtActivation;
-(char)showsSpringBoardStatusBar;
-(id)alertDisplayViewWithSize:(CGSize)arg1 ;
-(void)_lockedOnTop;
-(void)setOrderOutCompletion:(id)arg1 ;
-(void)_restoreIconListIfNecessary;
-(void)powerDownViewRequestCancel:(id)arg1 ;
-(void)powerDownViewRequestPowerDown:(id)arg1 ;
-(void)powerDownViewAnimateOutCompleted:(id)arg1 ;
-(id)orderOutCompletion;
-(void)orderFront;
-(void)powerDown;
-(void)orderOutWithCompletion:(/*^block*/id)arg1 ;
-(void)cancel;
-(void)setDelegate:(id<SBPowerDownControllerDelegate>)arg1 ;
-(void)dealloc;
-(id)init;
-(id<SBPowerDownControllerDelegate>)delegate;
-(unsigned)supportedInterfaceOrientations;
-(char)shouldAutorotate;
-(void)activate;
-(char)hasTranslucentBackground;
@end

