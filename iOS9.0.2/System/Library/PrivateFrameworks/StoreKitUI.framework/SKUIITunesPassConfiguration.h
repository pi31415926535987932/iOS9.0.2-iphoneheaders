/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:34:24 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSString;

@interface SKUIITunesPassConfiguration : NSObject {

	NSString* _dialogLearnMoreButton;
	NSString* _dialogMessage;
	NSString* _dialogNotNowButton;
	NSString* _dialogTitle;
	NSString* _learnMoreAddPassButtonTitle;
	NSString* _learnMoreDoneButtonTitle;
	NSString* _learnMoreExplanation;
	NSString* _learnMoreTitle;
	NSString* _learnMoreViewPassButtonTitle;
	NSString* _lockupDescription;
	NSString* _lockupLearnMoreLinkTitle;
	NSString* _lockupTitle;

}

@property (nonatomic,readonly) NSString * lockupDescription;                         //@synthesize lockupDescription=_lockupDescription - In the implementation block
@property (nonatomic,readonly) NSString * lockupLearnMoreLinkTitle;                  //@synthesize lockupLearnMoreLinkTitle=_lockupLearnMoreLinkTitle - In the implementation block
@property (nonatomic,readonly) NSString * lockupTitle;                               //@synthesize lockupTitle=_lockupTitle - In the implementation block
@property (nonatomic,readonly) NSString * learnMoreAddPassButtonTitle;               //@synthesize learnMoreAddPassButtonTitle=_learnMoreAddPassButtonTitle - In the implementation block
@property (nonatomic,readonly) NSString * learnMoreDoneButtonTitle;                  //@synthesize learnMoreDoneButtonTitle=_learnMoreDoneButtonTitle - In the implementation block
@property (nonatomic,readonly) NSString * learnMoreExplanation;                      //@synthesize learnMoreExplanation=_learnMoreExplanation - In the implementation block
@property (nonatomic,readonly) NSString * learnMoreTitle;                            //@synthesize learnMoreTitle=_learnMoreTitle - In the implementation block
@property (nonatomic,readonly) NSString * learnMoreViewPassButtonTitle;              //@synthesize learnMoreViewPassButtonTitle=_learnMoreViewPassButtonTitle - In the implementation block
-(NSString *)learnMoreExplanation;
-(NSString *)learnMoreViewPassButtonTitle;
-(NSString *)learnMoreAddPassButtonTitle;
-(NSString *)learnMoreTitle;
-(NSString *)learnMoreDoneButtonTitle;
-(NSString *)lockupTitle;
-(NSString *)lockupDescription;
-(NSString *)lockupLearnMoreLinkTitle;
-(id)initWithITunesPassDictionary:(id)arg1 clientContext:(id)arg2 ;
-(id)learnMoreAlertView;
@end

