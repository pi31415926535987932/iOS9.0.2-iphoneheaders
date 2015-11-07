/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:33:11 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/ITMLKit.framework/ITMLKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <ITMLKit/IKCSSMediaQueryList.h>

@class NSMutableArray, NSString;

@interface IKCSSMediaQueryAndList : IKCSSMediaQueryList {

	NSMutableArray* _queryList;
	char _negated;
	NSString* _type;

}

@property (nonatomic,retain) NSString * type;              //@synthesize type=_type - In the implementation block
@property (assign) char negated;                           //@synthesize negated=_negated - In the implementation block
-(unsigned)count;
-(id)init;
-(id)description;
-(void)setType:(NSString *)arg1 ;
-(NSString *)type;
-(char)evaluate;
-(id)subQueryAtIndex:(unsigned)arg1 ;
-(void)addQuery:(id)arg1 ;
-(id)expressionList;
-(char)negated;
-(void)setNegated:(char)arg1 ;
@end
