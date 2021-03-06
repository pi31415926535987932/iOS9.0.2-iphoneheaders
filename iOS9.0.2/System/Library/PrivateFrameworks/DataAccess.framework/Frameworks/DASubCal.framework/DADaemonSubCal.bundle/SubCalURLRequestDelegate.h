/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:32:35 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/DataAccess.framework/Frameworks/DASubCal.framework/DADaemonSubCal.bundle/DADaemonSubCal
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol SubCalURLRequestDelegate <NSObject>
@optional
-(void)subCalURLRequest:(id)arg1 updatedData:(id)arg2;
-(void)subCalURLRequestNeedsUsernameAndPasswordForHost:(id)arg1 continuation:(/*^block*/id)arg2;
-(void)subCalURLRequest:(id)arg1 didRedirectToURL:(id)arg2;

@required
-(void)handleTrustChallenge:(id)arg1 forSubCalURLRequest:(id)arg2;
-(void)subCalURLRequest:(id)arg1 finishedWithData:(id)arg2 error:(id)arg3;

@end

