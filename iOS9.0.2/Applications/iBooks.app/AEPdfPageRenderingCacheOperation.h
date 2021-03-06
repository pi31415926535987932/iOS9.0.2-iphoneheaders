/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 5:12:20 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /Applications/iBooks.app/iBooks
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <iBooks/iBooks-Structs.h>
#import <iBooks/IMRenderingCacheOperation.h>

@class NSURL;

@interface AEPdfPageRenderingCacheOperation : IMRenderingCacheOperation {

	int _pageNumber;
	NSURL* _url;

}

@property (assign,nonatomic) int pageNumber;              //@synthesize pageNumber=_pageNumber - In the implementation block
@property (nonatomic,retain) NSURL * url;                 //@synthesize url=_url - In the implementation block
-(id)generateImage:(CGSize)arg1 ;
-(id)callbackInvocationWithImage:(id)arg1 ;
-(id)scalePdfPage:(CGPDFPageRef)arg1 toSize:(CGSize)arg2 options:(int)arg3 ;
-(void)setPageNumber:(int)arg1 ;
-(void)dealloc;
-(NSURL *)url;
-(void)setUrl:(NSURL *)arg1 ;
-(int)pageNumber;
@end

