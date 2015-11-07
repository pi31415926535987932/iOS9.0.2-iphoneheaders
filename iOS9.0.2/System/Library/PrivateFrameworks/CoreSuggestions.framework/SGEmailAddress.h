/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:32:29 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/CoreSuggestions.framework/CoreSuggestions
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CoreSuggestions/SGLabeledObject.h>

@class NSString;

@interface SGEmailAddress : SGLabeledObject {

	NSString* _emailAddress;

}

@property (nonatomic,readonly) NSString * emailAddress;              //@synthesize emailAddress=_emailAddress - In the implementation block
+(char)supportsSecureCoding;
+(id)emailAddress:(id)arg1 label:(id)arg2 extractionType:(unsigned)arg3 withRecordId:(id)arg4 origin:(id)arg5 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(char)isEqual:(id)arg1 ;
-(unsigned)hash;
-(id)description;
-(id)initWithEmailAddress:(id)arg1 label:(id)arg2 extractionType:(unsigned)arg3 recordId:(id)arg4 origin:(id)arg5 ;
-(char)isEqualToEmailAddress:(id)arg1 ;
-(NSString *)emailAddress;
@end
