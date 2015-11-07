/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:31:46 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/AirPortAssistant.framework/AirPortAssistant
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <AirPortAssistant/StepByStepUIViewController.h>
#import <libobjc.A.dylib/TableViewManagerDelegate.h>

@class NSString;

@interface StepByStepUIViewController_Create_Guest : StepByStepUIViewController <TableViewManagerDelegate> {

	NSString* _wifiName;
	NSString* _wifiPassword;
	char _guestNetworkEnabled;
	int _guestNetSecMode;

}

@property (nonatomic,copy) NSString * wifiName;                     //@synthesize wifiName=_wifiName - In the implementation block
@property (nonatomic,copy) NSString * wifiPassword;                 //@synthesize wifiPassword=_wifiPassword - In the implementation block
@property (assign,nonatomic) char guestNetworkEnabled;              //@synthesize guestNetworkEnabled=_guestNetworkEnabled - In the implementation block
@property (assign,nonatomic) int guestNetSecMode;                   //@synthesize guestNetSecMode=_guestNetSecMode - In the implementation block
-(void)loadView;
-(void)viewWillAppear:(char)arg1 ;
-(char)shouldChangeTextField:(id)arg1 atIndexPath:(id)arg2 forTextIndex:(unsigned)arg3 toString:(id)arg4 ;
-(void)switchTouchedInCellAtIndexPath:(id)arg1 forSwitchIndex:(unsigned)arg2 isOn:(char)arg3 ;
-(void)textFieldDidChangeAtIndexPath:(id)arg1 ;
-(void)setupInitialTableHeaderConfiguration;
-(void)setupTable;
-(void)setWifiName:(NSString *)arg1 ;
-(void)setWifiPassword:(NSString *)arg1 ;
-(NSString *)wifiPassword;
-(NSString *)wifiName;
-(void)updateTable;
-(void)validateAndUpdateNextButton;
-(char)validateAndSetValues;
-(void)setGuestNetworkEnabled:(char)arg1 ;
-(void)setGuestNetSecMode:(int)arg1 ;
-(char)guestNetworkEnabled;
-(int)guestNetSecMode;
-(void)addGuestNetworkIsEnabledSection;
-(void)addGuestNetworkPasswordSection;
@end
