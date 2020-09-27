/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:14:16 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/MusicLibrary.framework/MusicLibrary
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MusicLibrary/MusicLibrary-Structs.h>
#import <MusicLibrary/ML3ImportOperation.h>

@class ML3StoreItemTrackData, ML3StoreItemPlaylistData;

@interface ML3StoreImportOperation : ML3ImportOperation {

	ML3StoreItemTrackData* _trackData;
	ML3StoreItemPlaylistData* _playlistData;

}
-(void)main;
-(unsigned long long)importSource;
-(BOOL)_performImportWithTransaction:(id)arg1 ;
-(BOOL)_importTracksUsingImportSession:(ML3ImportSession*)arg1 ;
-(BOOL)_importPlaylistsUsingImportSession:(ML3ImportSession*)arg1 ;
@end
