/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:13:31 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PhotoLibraryServices/PLManagedObject.h>

@class NSData, PLCloudMaster, PLAdditionalAssetAttributes;

@interface PLCloudMasterMediaMetadata : PLManagedObject

@property (nonatomic,retain) NSData * data; 
@property (nonatomic,retain) PLCloudMaster * cloudMaster; 
@property (nonatomic,retain) PLAdditionalAssetAttributes * additionalAssetAttributes; 
+(id)entityName;
-(id)payloadsForChangedKeys:(id)arg1 ;
-(void)_addPayloadIfValidForAsset:(id)arg1 changedKeys:(id)arg2 toPayloads:(id)arg3 modelProperties:(id)arg4 ;
@end
