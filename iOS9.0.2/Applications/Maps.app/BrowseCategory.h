/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 5:12:29 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /Applications/Maps.app/Maps
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSArray, GEOSearchCategory, MKSearchCompletion, NSString, UIImage;

@interface BrowseCategory : NSObject {

	unsigned _type;
	NSArray* _subCategories;
	GEOSearchCategory* _category;
	MKSearchCompletion* _searchAutoCompletion;

}

@property (assign,nonatomic) unsigned type;                                          //@synthesize type=_type - In the implementation block
@property (nonatomic,readonly) NSString * name; 
@property (nonatomic,readonly) NSString * alternativeName; 
@property (nonatomic,readonly) UIImage * image; 
@property (nonatomic,readonly) NSArray * subCategories;                              //@synthesize subCategories=_subCategories - In the implementation block
@property (nonatomic,retain) GEOSearchCategory * category;                           //@synthesize category=_category - In the implementation block
@property (nonatomic,retain) MKSearchCompletion * searchAutoCompletion;              //@synthesize searchAutoCompletion=_searchAutoCompletion - In the implementation block
-(void)setSearchAutoCompletion:(MKSearchCompletion *)arg1 ;
-(NSString *)alternativeName;
-(MKSearchCompletion *)searchAutoCompletion;
-(NSArray *)subCategories;
-(NSString *)name;
-(void)setCategory:(GEOSearchCategory *)arg1 ;
-(GEOSearchCategory *)category;
-(void)setType:(unsigned)arg1 ;
-(unsigned)type;
-(UIImage *)image;
-(id)initWithType:(unsigned)arg1 ;
-(id)initWithCategory:(id)arg1 ;
@end

