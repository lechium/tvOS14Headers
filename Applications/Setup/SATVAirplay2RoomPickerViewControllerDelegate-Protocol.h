//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 00:23:19).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

@class SATVAirplay2RoomPickerViewController;
@protocol SATVAirplay2DataSourceObject;

@protocol SATVAirplay2RoomPickerViewControllerDelegate
- (void)roomPickerViewControllerHomeHasBeenRemoved:(SATVAirplay2RoomPickerViewController *)arg1;
- (void)roomPickerViewControllerWantsNewRoomViewController:(SATVAirplay2RoomPickerViewController *)arg1;
- (void)roomPickerViewController:(SATVAirplay2RoomPickerViewController *)arg1 didSelectSuggestedRoom:(id <SATVAirplay2DataSourceObject>)arg2;
- (void)roomPickerViewController:(SATVAirplay2RoomPickerViewController *)arg1 didSelectExistingRoom:(id <SATVAirplay2DataSourceObject>)arg2;
@end

