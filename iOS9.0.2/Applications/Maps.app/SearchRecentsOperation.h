/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 5:12:32 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /Applications/Maps.app/Maps
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Foundation/NSOperation.h>

@protocol SearchRecentsOperationDelegate;
@class NSString;

@interface SearchRecentsOperation : NSOperation {

	NSString* _query;
	char _isExecuting;
	char _isFinished;
	id<SearchRecentsOperationDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<SearchRecentsOperationDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(id)initWithSearchQuery:(id)arg1 ;
-(char)isAsynchronous;
-(void)setDelegate:(id<SearchRecentsOperationDelegate>)arg1 ;
-(id<SearchRecentsOperationDelegate>)delegate;
-(void)start;
-(char)isFinished;
-(char)isExecuting;
@end
