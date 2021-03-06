/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 5:13:01 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /Applications/TencentWeiboAccountMigrationDialog.app/TencentWeiboAccountMigrationDialog
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UITableViewController.h>

@protocol SLTencentWeiboLoginInfoViewControllerDelegate;
@class SLTencentWeiboLoginInfoFooter;

@interface SLTencentWeiboLoginInfoViewController : UITableViewController {

	SLTencentWeiboLoginInfoFooter* _footerView;
	id<SLTencentWeiboLoginInfoViewControllerDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<SLTencentWeiboLoginInfoViewControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(void)_cancelTapped:(id)arg1 ;
-(void)_signInTapped:(id)arg1 ;
-(void)setDelegate:(id<SLTencentWeiboLoginInfoViewControllerDelegate>)arg1 ;
-(id)init;
-(float)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2 ;
-(float)tableView:(id)arg1 heightForFooterInSection:(int)arg2 ;
-(id)tableView:(id)arg1 viewForFooterInSection:(int)arg2 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(id)tableView:(id)arg1 titleForHeaderInSection:(int)arg2 ;
-(id<SLTencentWeiboLoginInfoViewControllerDelegate>)delegate;
-(void)loadView;
-(void)viewDidLoad;
@end

