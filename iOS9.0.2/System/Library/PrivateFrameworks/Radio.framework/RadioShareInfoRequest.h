/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:33:58 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/Radio.framework/Radio
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Radio/RadioRequest.h>

@class SSURLConnectionRequest, NSString, NSArray;

@interface RadioShareInfoRequest : RadioRequest {

	SSURLConnectionRequest* _request;
	int _shareType;
	long long _stationID;
	NSString* _stationHash;
	NSArray* _acceptedMIMETypes;

}

@property (nonatomic,copy) NSArray * acceptedMIMETypes;              //@synthesize acceptedMIMETypes=_acceptedMIMETypes - In the implementation block
-(void)startWithCompletionHandler:(/*^block*/id)arg1 ;
-(NSArray *)acceptedMIMETypes;
-(void)startWithShareInformationCompletionHandler:(/*^block*/id)arg1 ;
-(id)initWithStation:(id)arg1 shareType:(int)arg2 ;
-(void)setAcceptedMIMETypes:(NSArray *)arg1 ;
@end
