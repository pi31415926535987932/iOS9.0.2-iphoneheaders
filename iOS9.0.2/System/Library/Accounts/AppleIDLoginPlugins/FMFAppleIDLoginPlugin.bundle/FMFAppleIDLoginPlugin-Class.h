/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:04:32 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Accounts/AppleIDLoginPlugins/FMFAppleIDLoginPlugin.bundle/FMFAppleIDLoginPlugin
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <libobjc.A.dylib/AAAppleIDLoginPlugin.h>

@class ACAccountStore, NSString;

@interface FMFAppleIDLoginPlugin : NSObject <AAAppleIDLoginPlugin> {

	ACAccountStore* _accountStore;

}

@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)serviceIdentifier;
-(id)parametersForLoginRequest;
-(void)handleLoginResponse:(id)arg1 completion:(/*^block*/id)arg2 ;
-(id)parametersForIdentityEstablishmentRequest;
-(id)_accountStore;
@end
