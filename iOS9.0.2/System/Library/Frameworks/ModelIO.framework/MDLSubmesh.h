/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:30:54 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/ModelIO.framework/ModelIO
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <ModelIO/ModelIO-Structs.h>
#import <libobjc.A.dylib/MDLNamed.h>

@protocol MDLMeshBuffer;
@class MDLMaterial, MDLSubmeshTopology, NSString;

@interface MDLSubmesh : NSObject <MDLNamed> {

	MDLMaterial* _material;
	id<MDLMeshBuffer> _indexBuffer;
	unsigned _indexCount;
	unsigned _indexType;
	int _geometryType;
	MDLSubmeshTopology* _topology;
	NSString* _name;

}

@property (nonatomic,retain,readonly) id<MDLMeshBuffer> indexBuffer;              //@synthesize indexBuffer=_indexBuffer - In the implementation block
@property (nonatomic,readonly) unsigned indexCount;                               //@synthesize indexCount=_indexCount - In the implementation block
@property (nonatomic,readonly) unsigned indexType;                                //@synthesize indexType=_indexType - In the implementation block
@property (nonatomic,readonly) int geometryType;                                  //@synthesize geometryType=_geometryType - In the implementation block
@property (nonatomic,retain) MDLMaterial * material;                              //@synthesize material=_material - In the implementation block
@property (nonatomic,retain,readonly) MDLSubmeshTopology * topology;              //@synthesize topology=_topology - In the implementation block
@property (nonatomic,copy) NSString * name;                                       //@synthesize name=_name - In the implementation block
+(id)newSubmeshWithSCNGeometryElement:(id)arg1 ;
+(id)submeshWithSCNGeometryElement:(id)arg1 ;
-(id)initWithMDLSubmesh:(id)arg1 indexType:(unsigned)arg2 geometryType:(int)arg3 ;
-(MDLSubmeshTopology *)topology;
-(id)initWithName:(id)arg1 indexBuffer:(id)arg2 indexCount:(unsigned)arg3 indexType:(unsigned)arg4 geometryType:(int)arg5 material:(id)arg6 topology:(id)arg7 ;
-(id)initWithName:(id)arg1 indexBuffer:(id)arg2 indexCount:(unsigned)arg3 indexType:(unsigned)arg4 geometryType:(int)arg5 material:(id)arg6 ;
-(void)debugPrintToFile:(_sFILE*)arg1 ;
-(MDLAABBRef)boundingBoxForMesh:(id)arg1 ;
-(id)initWithIndexBuffer:(id)arg1 indexCount:(unsigned)arg2 indexType:(unsigned)arg3 geometryType:(int)arg4 material:(id)arg5 ;
-(unsigned)indexCount;
-(int)geometryType;
-(id<MDLMeshBuffer>)indexBuffer;
-(unsigned)indexType;
-(void)dealloc;
-(void)setName:(NSString *)arg1 ;
-(NSString *)name;
-(void)setMaterial:(MDLMaterial *)arg1 ;
-(MDLMaterial *)material;
@end

