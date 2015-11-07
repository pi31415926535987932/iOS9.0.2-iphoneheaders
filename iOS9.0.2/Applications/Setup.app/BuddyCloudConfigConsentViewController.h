/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 5:12:59 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /Applications/Setup.app/Setup
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Setup/BuddySimpleTCController.h>

@class BuddyCloudConfigController, NSData, NSArray;

@interface BuddyCloudConfigConsentViewController : BuddySimpleTCController {

	BuddyCloudConfigController* _configController;
	NSData* _profileData;
	NSArray* _profileWarnings;

}

@property (assign,nonatomic,__weak) BuddyCloudConfigController * configController;              //@synthesize configController=_configController - In the implementation block
@property (nonatomic,retain) NSData * profileData;                                              //@synthesize profileData=_profileData - In the implementation block
@property (nonatomic,retain) NSArray * profileWarnings;                                         //@synthesize profileWarnings=_profileWarnings - In the implementation block
-(id)tcContent;
-(void)agree:(id)arg1 ;
-(void)disagree:(id)arg1 ;
-(void)setConfigController:(BuddyCloudConfigController *)arg1 ;
-(BuddyCloudConfigController *)configController;
-(void)setProfileWarnings:(NSArray *)arg1 ;
-(NSArray *)profileWarnings;
-(void)viewDidAppear:(char)arg1 ;
-(void)setProfileData:(NSData *)arg1 ;
-(NSData *)profileData;
-(id)titleString;
@end
