/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 5:12:35 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /Applications/MobileCal.app/MobileCal
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UIViewController.h>
#import <MobileCal/EKStyleProvider.h>
#import <MobileCal/PopoverContentView.h>
#import <MobileCal/ImmunityFromCustomAdaptationOfPresentedViewControllersAcrossSizeClasses.h>

@class CalendarModel, UINavigationController, NSString;

@interface CalendarsViewController : UIViewController <EKStyleProvider, PopoverContentView, ImmunityFromCustomAdaptationOfPresentedViewControllersAcrossSizeClasses> {

	/*^block*/id _doneBlock;
	CalendarModel* _model;
	UINavigationController* _embeddedNavigationController;

}

@property (nonatomic,copy) id doneBlock;                                                         //@synthesize doneBlock=_doneBlock - In the implementation block
@property (nonatomic,retain) CalendarModel * model;                                              //@synthesize model=_model - In the implementation block
@property (nonatomic,retain) UINavigationController * embeddedNavigationController;              //@synthesize embeddedNavigationController=_embeddedNavigationController - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)doneBlock;
-(void)setDoneBlock:(id)arg1 ;
-(char)isImmuneToCustomAdaptation;
-(UINavigationController *)embeddedNavigationController;
-(void)_saveFilterAndNotify;
-(void)setEmbeddedNavigationController:(UINavigationController *)arg1 ;
-(id)backgroundColorOpaque;
-(char)prefersForcedModalShowViewController;
-(void)calendarChooserSelectionDidChange:(id)arg1 ;
-(void)calendarChooserDidFinish:(id)arg1 ;
-(void)refreshCalendarsButtonPressed;
-(id)backgroundColor;
-(unsigned)supportedInterfaceOrientations;
-(void)loadView;
-(void)viewWillLayoutSubviews;
-(CalendarModel *)model;
-(char)canDismiss;
-(id)initWithModel:(id)arg1 ;
-(void)setModel:(CalendarModel *)arg1 ;
@end
