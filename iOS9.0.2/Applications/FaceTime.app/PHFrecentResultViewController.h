/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 5:12:02 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /Applications/FaceTime.app/FaceTime
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <FaceTime/PHRecentCallsTableViewController.h>
#import <FaceTime/PHFrecentCellDelegate.h>

@class NSString;

@interface PHFrecentResultViewController : PHRecentCallsTableViewController <PHFrecentCellDelegate>

@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)presentingViewControllerForAvatarView;
-(void)performDial:(id)arg1 withService:(int)arg2 ;
-(id)additionalActionsForSearchResult:(id)arg1 ;
-(id)additionalActionsAlertTitleForSearchResult:(id)arg1 ;
-(void)dialResult:(id)arg1 audioOnlyCall:(char)arg2 fromButton:(id)arg3 ;
-(void)_resetFrecentAlphaAndContentView;
-(void)dealloc;
-(float)tableView:(id)arg1 heightForFooterInSection:(int)arg2 ;
-(void)viewDidLoad;
-(void)_callStatusChanged:(id)arg1 ;
@end
