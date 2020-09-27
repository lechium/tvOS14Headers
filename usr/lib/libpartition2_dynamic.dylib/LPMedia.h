/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 12:50:24 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /usr/lib/libpartition2_dynamic.dylib
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface LPMedia : NSObject {

	unsigned _ioMedia;

}

@property (assign) unsigned ioMedia;              //@synthesize ioMedia=_ioMedia - In the implementation block
+(id)allMedia;
+(id)supportedContentTypes;
+(id)mediaForPath:(id)arg1 ;
+(id)mediaOfCorrectTypeGivenIOMedia:(unsigned)arg1 ;
+(id)mediaForPath:(id)arg1 snapshotName:(id*)arg2 ;
+(id)liveMediaForSnapshotAtPath:(id)arg1 ;
+(unsigned)_copyIOMediaForDiskWithPath:(id)arg1 ;
+(unsigned)_copyLiveFilesystemIOMediaForRootedSnapshot;
+(id)mediaForPath:(id)arg1 isSnapshot:(BOOL*)arg2 ;
+(id)snapshotNameForMediaForPath:(id)arg1 ;
+(id)mediaForUUID:(id)arg1 ;
+(id)mediaForBSDNameOrDeviceNode:(id)arg1 ;
+(id)contentTypeToSubclassMap;
-(id)name;
-(BOOL)isEqual:(id)arg1 ;
-(id)description;
-(void)dealloc;
-(id)content;
-(id)mountPoint;
-(BOOL)isInternal;
-(unsigned)ioMedia;
-(void)setIoMedia:(unsigned)arg1 ;
-(id)BSDName;
-(id)mediaUUID;
-(id)getStringPropertyWithName:(id)arg1 ;
-(id)initWithIOMediaObject:(unsigned)arg1 ;
-(BOOL)getBoolPropertyWithName:(id)arg1 ;
-(id)devNodePath;
-(BOOL)isWhole;
-(BOOL)isInternalAndIsRootDevice:(BOOL*)arg1 ;
-(id)wholeMediaForMedia;
-(BOOL)setName:(id)arg1 withError:(id*)arg2 ;
@end
