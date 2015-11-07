/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 5:12:42 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /Applications/MobileNotes.app/MobileNotes
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UINavigationController.h>

@class NSArray;

@interface MailNavigationController : UINavigationController {

	NSArray* _previousViewControllers;
	char _hasAppeared;
	char _poppingFromLeft;

}
-(id)popViewControllersPushedFromLeftAnimated:(char)arg1 ;
-(void)pushViewControllersFromLeft:(id)arg1 animated:(char)arg2 ;
-(void)_didPopFromLeft;
-(char)isPopping;
-(char)canShowTransferNavigationController;
-(void)removeViewController:(id)arg1 ;
-(id)popViewControllerAnimated:(char)arg1 ;
-(char)shouldAutorotate;
-(void)viewWillAppear:(char)arg1 ;
-(char)_viewControllerUnderlapsStatusBar;
-(void)viewDidAppear:(char)arg1 ;
-(void)viewDidDisappear:(char)arg1 ;
-(id)popToViewController:(id)arg1 animated:(char)arg2 ;
-(void)didShowViewController:(id)arg1 animated:(char)arg2 ;
@end
