---
type: index
---
# Log
```button
name Add Meeting
type note(NewMeeting, split) template
action meeting
templater true
```
^button-NewMeetingID

```dataview
TABLE date, summary
WHERE type = "meeting" and file.folder != "templates"
SORT date DESC
```

# Pending Tasks

```dataview
TASK
WHERE type = "meeting" AND !completed
SORT date desc
```

# Completed Tasks
```dataview
TASK
WHERE type = "meeting" AND completed
SORT date DESC
```