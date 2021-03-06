/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:08:24 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PreferenceBundles/TencentWeiboSettings.bundle/TencentWeiboSettings
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <AccountsUI/ACUIViewController.h>

@protocol TEAccountCreationDelegate;
@class NSString, PSTextFieldSpecifier, PSSpecifier;

@interface TEAccountCreationController : ACUIViewController {

	NSString* _screenName;
	NSString* _nickName;
	NSString* _email;
	NSString* _password;
	NSString* _verify;
	NSString* _gender;
	char _geoEnabled;
	PSTextFieldSpecifier* _emailSpecifier;
	PSTextFieldSpecifier* _userIDSpecifier;
	PSSpecifier* _signUpSpecifier;
	PSSpecifier* _legalSpecifier;
	id<TEAccountCreationDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<TEAccountCreationDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(id)_errorForErrorCode:(id)arg1 ;
-(void)setPassword:(id)arg1 withSpecifier:(id)arg2 ;
-(id)passwordWithSpecifier:(id)arg1 ;
-(void)_presentPasswordTooShortAlert;
-(void)_createAccount;
-(id)screenNameWithSpecifier:(id)arg1 ;
-(void)setNickName:(id)arg1 withSpecifier:(id)arg2 ;
-(id)nickNameWithSpecifier:(id)arg1 ;
-(void)setVerify:(id)arg1 withSpecifier:(id)arg2 ;
-(id)verifyWithSpecifier:(id)arg1 ;
-(void)setEmail:(id)arg1 withSpecifier:(id)arg2 ;
-(id)emailWithSpecifier:(id)arg1 ;
-(void)setGender:(id)arg1 withSpecifier:(id)arg2 ;
-(id)genderWithSpecifier:(id)arg1 ;
-(void)setLocation:(id)arg1 withSpecifier:(id)arg2 ;
-(id)locationWithSpecifier:(id)arg1 ;
-(void)_legalTermsOfServiceLinkTapped:(id)arg1 ;
-(char)_haveEnoughValuesForValidation;
-(char)_isEmailAddressValid;
-(void)_presentInvalidEmailAddressAlert;
-(void)_presentScreenNameTooLongAlert;
-(void)_presentScreenNameTooShortAlert;
-(void)_presentNickNameTooShortAlert;
-(void)_presentNickNameTooLongAlert;
-(char)_isScreenNameValid;
-(void)_presentScreenNameInvalidAlert;
-(void)_presentPasswordVerifyDoNotMatchAlert;
-(char)_isPasswordValid;
-(void)_presentInvalidPasswordAlert;
-(char)_isPasswordBlackListed;
-(void)_presentPasswordTooSimpleAlert;
-(void)_presentPasswordTooLongAlert;
-(int)numericValueForGender:(id)arg1 ;
-(char)validateAccountCreationReturnObject:(id)arg1 ;
-(void)_presentResponseError:(id)arg1 ;
-(void)_incrementNewAccountCounter;
-(void)_setGeotagAccountSetting:(char)arg1 ;
-(void)_presentErrorCreatingAccount;
-(void)_signUpButtonClicked:(id)arg1 ;
-(void)setScreenName:(id)arg1 withSpecifier:(id)arg2 ;
-(char)_validateValues;
-(id)specifiers;
-(void)setDelegate:(id<TEAccountCreationDelegate>)arg1 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(id<TEAccountCreationDelegate>)delegate;
-(void)viewDidLoad;
-(void)propertyValueChanged:(id)arg1 ;
-(void)updateNavButtons;
-(void)_updateDoneButton;
-(void)_cancelButtonClicked:(id)arg1 ;
-(void)returnPressedAtEnd;
-(id)gender;
-(void)setGender:(id)arg1 ;
@end

