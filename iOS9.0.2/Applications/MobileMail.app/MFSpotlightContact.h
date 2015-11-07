/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 5:12:38 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /Applications/MobileMail.app/MobileMail
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSMutableArray, NSString, CNContact, NSArray;

@interface MFSpotlightContact : NSObject {

	NSMutableArray* _values;
	NSString* _displayName;
	CNContact* _contact;

}

@property (nonatomic,readonly) NSString * displayName;              //@synthesize displayName=_displayName - In the implementation block
@property (nonatomic,readonly) NSArray * values; 
@property (nonatomic,readonly) CNContact * contact;                 //@synthesize contact=_contact - In the implementation block
-(id)initWithDisplayName:(id)arg1 values:(id)arg2 ;
-(char)hasValue:(id)arg1 ;
-(CNContact *)contact;
-(id)initWithContact:(id)arg1 ;
-(void)dealloc;
-(NSArray *)values;
-(NSString *)displayName;
-(void)addValue:(id)arg1 ;
@end
