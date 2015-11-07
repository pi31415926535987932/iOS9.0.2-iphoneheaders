/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:32:29 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/CoreSuggestions.framework/CoreSuggestions
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CoreSuggestions/CoreSuggestions-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, SGSimpleNamedEmailAddress, NSArray, NSDate, NSURL;

@interface SGOrigin : NSObject <NSCopying, NSSecureCoding> {

	unsigned _type;
	NSString* _sourceKey;
	NSString* _externalKey;
	NSString* _contextSnippet;
	NSRange _contextSnippetRange;
	SGSimpleNamedEmailAddress* _from;
	NSArray* _to;
	NSArray* _cc;
	NSArray* _bcc;
	NSDate* _date;
	NSString* _title;
	char _fromForwardedMessage;

}

@property (nonatomic,readonly) unsigned type;                                              //@synthesize type=_type - In the implementation block
@property (nonatomic,readonly) NSString * sourceKey;                                       //@synthesize sourceKey=_sourceKey - In the implementation block
@property (nonatomic,readonly) NSString * externalKey;                                     //@synthesize externalKey=_externalKey - In the implementation block
@property (nonatomic,readonly) NSString * contextSnippet;                                  //@synthesize contextSnippet=_contextSnippet - In the implementation block
@property (nonatomic,readonly) NSRange contextSnippetRange;                                //@synthesize contextSnippetRange=_contextSnippetRange - In the implementation block
@property (nonatomic,readonly) SGSimpleNamedEmailAddress * from;                           //@synthesize from=_from - In the implementation block
@property (nonatomic,readonly) NSArray * to;                                               //@synthesize to=_to - In the implementation block
@property (nonatomic,readonly) NSArray * cc;                                               //@synthesize cc=_cc - In the implementation block
@property (nonatomic,readonly) NSArray * bcc;                                              //@synthesize bcc=_bcc - In the implementation block
@property (nonatomic,readonly) NSDate * date;                                              //@synthesize date=_date - In the implementation block
@property (nonatomic,readonly) NSString * title;                                           //@synthesize title=_title - In the implementation block
@property (getter=isFromForwardedMessage,readonly) char fromForwardedMessage;              //@synthesize fromForwardedMessage=_fromForwardedMessage - In the implementation block
@property (nonatomic,readonly) NSURL * url; 
+(char)supportsSecureCoding;
+(id)originWithType:(unsigned)arg1 sourceKey:(id)arg2 externalKey:(id)arg3 fromForwardedMessage:(char)arg4 ;
-(NSString *)contextSnippet;
-(NSRange)contextSnippetRange;
-(NSString *)externalKey;
-(NSArray *)cc;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)init;
-(char)isEqual:(id)arg1 ;
-(unsigned)hash;
-(NSURL *)url;
-(unsigned)type;
-(NSString *)title;
-(NSDate *)date;
-(id)copyWithZone:(NSZone*)arg1 ;
-(char)isEqualToOrigin:(id)arg1 ;
-(id)initWithType:(unsigned)arg1 sourceKey:(id)arg2 externalKey:(id)arg3 fromForwardedMessage:(char)arg4 ;
-(char)isFromForwardedMessage;
-(NSString *)sourceKey;
-(NSArray *)bcc;
-(SGSimpleNamedEmailAddress *)from;
-(NSArray *)to;
@end
