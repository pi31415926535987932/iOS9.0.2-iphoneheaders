/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:08:04 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PreferenceBundles/AccountSettings/AppleAccountSettings.bundle/AppleAccountSettings
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UITableViewDelegate.h>

@protocol UITableViewDelegate;
@class NSObject, UITableView, AAFamilyMember, AAUIProfilePictureStore, NSString;

@interface AAUIFamilyMemberDetailsPageSurrogate : NSObject <UITableViewDelegate> {

	NSObject*<UITableViewDelegate> _remoteTableViewController;
	UITableView* _remoteTableView;
	AAFamilyMember* _familyMember;
	AAUIProfilePictureStore* _pictureStore;

}

@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithPage:(id)arg1 forPerson:(id)arg2 account:(id)arg3 store:(id)arg4 ;
-(void)dealloc;
-(char)respondsToSelector:(SEL)arg1 ;
-(float)tableView:(id)arg1 heightForHeaderInSection:(int)arg2 ;
-(float)tableView:(id)arg1 heightForFooterInSection:(int)arg2 ;
-(id)tableView:(id)arg1 viewForHeaderInSection:(int)arg2 ;
-(id)methodSignatureForSelector:(SEL)arg1 ;
-(void)forwardInvocation:(id)arg1 ;
@end

