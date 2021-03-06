/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 5:12:58 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /Applications/Setup.app/Setup
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <SpringBoardUIServices/SBUIEmergencyCallHostViewController.h>

@protocol EmergencyDialerDelegate;
@interface EmergencyDialer : SBUIEmergencyCallHostViewController {

	id<EmergencyDialerDelegate> _delegate;

}

@property (__weak) id<EmergencyDialerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(void)setDelegate:(id<EmergencyDialerDelegate>)arg1 ;
-(id<EmergencyDialerDelegate>)delegate;
-(unsigned)supportedInterfaceOrientations;
-(void)dismiss;
@end

