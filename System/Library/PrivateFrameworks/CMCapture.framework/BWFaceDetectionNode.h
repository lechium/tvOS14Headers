/*
                       * This header is generated by classdump-dyld 1.0
                       * on Monday, September 28, 2020 at 7:01:43 PM Mountain Standard Time
                       * Operating System: Version 14.0 (Build 18J386)
                       * Image Source: /System/Library/PrivateFrameworks/CMCapture.framework/CMCapture
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
                       */

#import <CMCapture/CMCapture-Structs.h>
#import <CMCapture/BWFanOutNode.h>

@class BWNodeOutput, NSArray, NSSet, NSDictionary;

@interface BWFaceDetectionNode : BWFanOutNode {

	BWNodeOutput* _metadataObjectOutput;
	NSArray* _boxedMetadataOutputs;
	CGRect _rectOfInterest;
	os_unfair_lock_s _rectOfInterestLock;
	BOOL _metadataObjectOutputEnabled;
	BOOL _boxedMetadataOutputEnabled;
	NSSet* _enabledDetectedObjectTypes;
	int _lastObjectFaceCount;
	int _lastDetectedObjectsCount;
	unsigned _localIDsForFaces_BE[5];
	unsigned _localIDsForDetectedHumanBodies_BE[3];
	unsigned _localIDsForDetectedCatBodies_BE[3];
	unsigned _localIDsForDetectedDogBodies_BE[3];
	unsigned _localIDsForDetectedSalientObjects_BE[3];
	NSDictionary* _detectionTimingInfoByBoxedOutput;
	unsigned _localIDOfDetectedFace_BE;
	unsigned _localIDOfDetectedFaceFaceID_BE;
	unsigned _localIDOfDetectedFaceBounds_BE;
	unsigned _localIDOfDetectedFaceRoll_BE;
	unsigned _localIDOfDetectedFaceYaw_BE;
	OpaqueCMBlockBufferRef _emptyMetadataSampleData;
	SCD_Struct_BW36 _prevBoxedFacePTS;
	SCD_Struct_BW36 _prevBoxedFaceDur;
	SCD_Struct_BW36 _prevBoxedNoFacePTS;
	int _lastBoxedFaceCount;
	unsigned _recordCollectionAtomIdentifier_BE;
	unsigned _collectionItemsAtomIdentifier_BE;

}

@property (readonly) BWNodeOutput * metadataObjectOutput;              //@synthesize metadataObjectOutput=_metadataObjectOutput - In the implementation block
@property (readonly) NSArray * boxedMetadataOutputs;                   //@synthesize boxedMetadataOutputs=_boxedMetadataOutputs - In the implementation block
+(void)initialize;
-(void)dealloc;
-(id)nodeType;
-(CGRect)rectOfInterest;
-(void)setRectOfInterest:(CGRect)arg1 ;
-(void)didSelectFormat:(id)arg1 forInput:(id)arg2 ;
-(void)renderSampleBuffer:(opaqueCMSampleBufferRef)arg1 forInput:(id)arg2 ;
-(void)didReachEndOfDataForInput:(id)arg1 ;
-(id)nodeSubType;
-(void)configurationWithID:(long long)arg1 updatedFormat:(id)arg2 didBecomeLiveForInput:(id)arg3 ;
-(NSArray *)boxedMetadataOutputs;
-(id)initWithObjectMetadataIdentifiers:(id)arg1 movieFileOutputMetadataIdentifierGroups:(id)arg2 ;
-(void)setMetadataObjectOutputEnabled:(BOOL)arg1 ;
-(void)setBoxedMetadataOutputEnabled:(BOOL)arg1 ;
-(BWNodeOutput *)metadataObjectOutput;
-(BOOL)metadataObjectOutputEnabled;
-(int)_populateLocalIDsForFacesWithFormatDescription:(opaqueCMFormatDescriptionRef)arg1 ;
-(int)_populateLocalIDsForHumanBodiesWithFormatDescription:(opaqueCMFormatDescriptionRef)arg1 ;
-(int)_populateLocalIDsForCatBodiesWithFormatDescription:(opaqueCMFormatDescriptionRef)arg1 ;
-(int)_populateLocalIDsForDogBodiesWithFormatDescription:(opaqueCMFormatDescriptionRef)arg1 ;
-(int)_populateLocalIDsForSalientObjectsWithFormatDescription:(opaqueCMFormatDescriptionRef)arg1 ;
-(BOOL)_addFacesArray:(id)arg1 toSampleBuffer:(opaqueCMSampleBufferRef)arg2 ;
-(void)_renderSampleBufferForBoxedMetadataOutput:(opaqueCMSampleBufferRef)arg1 withFaceArray:(id)arg2 ;
-(void)_renderSampleBufferForBoxedMetadataOutput:(opaqueCMSampleBufferRef)arg1 withDetectedObjectsInfo:(id)arg2 ;
-(BOOL)_addDetectedObjectsInfo:(id)arg1 toSampleBuffer:(opaqueCMSampleBufferRef)arg2 ;
-(void)_renderSampleBuffer:(opaqueCMSampleBufferRef)arg1 forBoxedMetadataOutput:(id)arg2 withDetectedObjectsInfo:(id)arg3 ;
-(unsigned*)localIDsForKey:(id)arg1 ;
-(unsigned long long)append:(id)arg1 toBoxedData:(char*)arg2 localIDs:(unsigned*)arg3 isFace:(BOOL)arg4 ;
-(OpaqueCMBlockBufferRef)_getEmptyMetadataSampleData;
-(BOOL)boxedMetadataOutputEnabled;
@end

