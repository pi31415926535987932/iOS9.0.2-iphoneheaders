/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 5:11:58 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /Applications/Bridge.app/Bridge
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Preferences/PSRootController.h>

@class COSPreferencesListController;

@interface COSBridgeRootController : PSRootController {

	COSPreferencesListController* _rootListController;

}

@property (nonatomic,readonly) COSPreferencesListController * rootListController;              //@synthesize rootListController=_rootListController - In the implementation block
-(void)pushViewController:(id)arg1 animated:(char)arg2 ;
-(void)setViewControllers:(id)arg1 animated:(char)arg2 ;
-(COSPreferencesListController *)rootListController;
-(void)setupControllerForToolbar:(id)arg1 ;
@end

