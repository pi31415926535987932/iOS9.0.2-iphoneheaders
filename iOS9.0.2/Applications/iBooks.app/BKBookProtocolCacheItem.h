/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 5:12:19 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /Applications/iBooks.app/iBooks
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSString, NSDictionary;

@interface BKBookProtocolCacheItem : NSObject {

	NSString* _epubID;
	NSString* _rootPath;
	NSDictionary* _sinfInfo;
	NSDictionary* _documents;

}

@property (nonatomic,retain) NSString * epubID;                     //@synthesize epubID=_epubID - In the implementation block
@property (nonatomic,retain) NSString * rootPath;                   //@synthesize rootPath=_rootPath - In the implementation block
@property (nonatomic,retain) NSDictionary * sinfInfo;               //@synthesize sinfInfo=_sinfInfo - In the implementation block
@property (nonatomic,retain) NSDictionary * documents;              //@synthesize documents=_documents - In the implementation block
-(NSString *)epubID;
-(NSDictionary *)sinfInfo;
-(id)infoForDocumentAtPath:(id)arg1 ;
-(id)dataForSinfNumber:(id)arg1 ;
-(void)setEpubID:(NSString *)arg1 ;
-(void)setSinfInfo:(NSDictionary *)arg1 ;
-(void)dealloc;
-(void)setRootPath:(NSString *)arg1 ;
-(void)setDocuments:(NSDictionary *)arg1 ;
-(NSString *)rootPath;
-(NSDictionary *)documents;
@end
