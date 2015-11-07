/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:31:05 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/Social.framework/Social
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UITableViewController.h>
#import <libobjc.A.dylib/SLFacebookAudienceViewController.h>

@protocol SLFacebookAudienceViewControllerDelegate;
@class NSArray, SLFacebookPostPrivacySetting, UINavigationItem;

@interface SLFacebookAudienceTableViewController : UITableViewController <SLFacebookAudienceViewController> {

	NSArray* _privacySettings;
	SLFacebookPostPrivacySetting* _selectedSetting;
	id<SLFacebookAudienceViewControllerDelegate> _selectionDelegate;
	UINavigationItem* _navigationItem;

}
-(void)cancelButtonTapped:(id)arg1 ;
-(void)setSelectionDelegate:(id)arg1 ;
-(id)_privacySettingForIndexPath:(id)arg1 ;
-(void)setPrivacySettings:(id)arg1 ;
-(void)setCurrentPrivacySetting:(id)arg1 ;
-(void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(int)numberOfSectionsInTableView:(id)arg1 ;
-(void)didReceiveMemoryWarning;
-(id)initWithStyle:(int)arg1 ;
-(void)loadView;
-(void)viewWillLayoutSubviews;
-(void)viewWillAppear:(char)arg1 ;
-(void)viewDidLoad;
-(void)viewDidUnload;
-(void)viewDidAppear:(char)arg1 ;
-(void)viewWillDisappear:(char)arg1 ;
-(void)viewDidDisappear:(char)arg1 ;
@end
