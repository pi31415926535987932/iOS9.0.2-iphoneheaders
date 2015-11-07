/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:31:39 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PreferenceBundles/AccountSettings/MobileMailSettings.bundle/MobileMailSettings
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Preferences/PSListController.h>

@class PSSpecifier;

@interface AccountPSOutgoingController : PSListController {

	PSSpecifier* _newOutgoingAccountSpecifier;

}
-(id)specifiers;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(id)_getStatusForServer:(id)arg1 ;
-(id)specifierForDeliveryAccount:(id)arg1 isPrimary:(char)arg2 isCarrierAccount:(char)arg3 ;
-(void)reloadOutgoingAccounts;
-(void)finishedAccountSetup;
-(void)canceledAccountSetup;
@end
