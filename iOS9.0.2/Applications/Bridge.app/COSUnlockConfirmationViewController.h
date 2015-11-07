/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 5:11:58 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /Applications/Bridge.app/Bridge
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Bridge/COSSetupPageViewController.h>
#import <Bridge/COSBuddyController.h>

@class UILabel, COSPhoneView, COSWatchView, UIButton, NSString;

@interface COSUnlockConfirmationViewController : COSSetupPageViewController <COSBuddyController> {

	UILabel* _titleLabel;
	COSPhoneView* _phoneView;
	COSWatchView* _watchView;
	UILabel* _subtitleLabel;
	UILabel* _detailLabel;
	UILabel* _subDetailLabel;
	UIButton* _confirmButton;
	char _mandatory;
	char _completed;

}

@property (assign,nonatomic) char completed;                        //@synthesize completed=_completed - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(char)isMandatory;
+(id)_fakeBackButtonItemForTarget:(id)arg1 withAction:(SEL)arg2 ;
-(void)unlockPairingComplete:(id)arg1 ;
-(void)confirmed;
-(void)setMandatory:(char)arg1 ;
-(char)completed;
-(void)_updateLayout;
-(void)dealloc;
-(id)init;
-(void)loadView;
-(void)setCompleted:(char)arg1 ;
-(id)titleString;
-(void)back:(id)arg1 ;
-(void)removeFromNavHierarchyOf:(id)arg1 ;
@end
