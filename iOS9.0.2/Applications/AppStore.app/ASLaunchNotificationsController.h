/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 5:11:57 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /Applications/AppStore.app/AppStore
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class SKUIClientContext, AAUIFamilySetupPrompter, NSOperationQueue, UIViewController;

@interface ASLaunchNotificationsController : NSObject {

	SKUIClientContext* _clientContext;
	AAUIFamilySetupPrompter* _familySetupPrompter;
	NSOperationQueue* _operationQueue;
	UIViewController* _parentViewController;

}

@property (nonatomic,retain) SKUIClientContext * clientContext;              //@synthesize clientContext=_clientContext - In the implementation block
-(void)checkForNotifications;
-(char)_hasDisplayedFamilySetup;
-(void)_showFamilySetupPrompt;
-(void)setClientContext:(SKUIClientContext *)arg1 ;
-(SKUIClientContext *)clientContext;
-(id)initWithParentViewController:(id)arg1 ;
@end

